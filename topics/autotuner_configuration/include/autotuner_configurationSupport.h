
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef autotuner_configurationSupport_985792920_h
#define autotuner_configurationSupport_985792920_h

/* Uses */
#include "autotuner_configuration.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace Shell {
    namespace Hmi {
        namespace AutoTunerConfiguration {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                ModelStateTypeSupport, 
                ModelState);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ModelStateDataWriter, ModelState);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ModelStateDataReader, ModelStateSeq, ModelState);
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                DiffpTuningStateTypeSupport, 
                DiffpTuningState);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(DiffpTuningStateDataWriter, DiffpTuningState);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(DiffpTuningStateDataReader, DiffpTuningStateSeq, DiffpTuningState);
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                WobTuningStateTypeSupport, 
                WobTuningState);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(WobTuningStateDataWriter, WobTuningState);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(WobTuningStateDataReader, WobTuningStateSeq, WobTuningState);
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                TorqueTuningStateTypeSupport, 
                TorqueTuningState);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(TorqueTuningStateDataWriter, TorqueTuningState);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(TorqueTuningStateDataReader, TorqueTuningStateSeq, TorqueTuningState);
            #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

            #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace AutoTunerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#endif  /* autotuner_configurationSupport_985792920_h */

