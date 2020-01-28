
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from autotuner_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef autotuner_configurationSupport_985795544_h
#define autotuner_configurationSupport_985795544_h

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
                ModelStateRequestTypeSupport, 
                ModelStateRequest);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ModelStateRequestDataWriter, ModelStateRequest);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ModelStateRequestDataReader, ModelStateRequestSeq, ModelStateRequest);
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
                ModelStateStateTypeSupport, 
                ModelStateState);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ModelStateStateDataWriter, ModelStateState);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ModelStateStateDataReader, ModelStateStateSeq, ModelStateState);
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
                DiffpTuningRequestTypeSupport, 
                DiffpTuningRequest);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(DiffpTuningRequestDataWriter, DiffpTuningRequest);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(DiffpTuningRequestDataReader, DiffpTuningRequestSeq, DiffpTuningRequest);
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
                WobTuningRequestTypeSupport, 
                WobTuningRequest);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(WobTuningRequestDataWriter, WobTuningRequest);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(WobTuningRequestDataReader, WobTuningRequestSeq, WobTuningRequest);
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
                TorqueTuningRequestTypeSupport, 
                TorqueTuningRequest);

            #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(TorqueTuningRequestDataWriter, TorqueTuningRequest);
            #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
            #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
            DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(TorqueTuningRequestDataReader, TorqueTuningRequestSeq, TorqueTuningRequest);
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

#endif  /* autotuner_configurationSupport_985795544_h */

