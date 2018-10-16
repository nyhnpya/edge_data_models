
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from roptimizer_configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef roptimizer_configurationSupport_360071563_h
#define roptimizer_configurationSupport_360071563_h

/* Uses */
#include "roptimizer_configuration.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace Shell {
    namespace Hmi {
        namespace RoptimizerConfiguration {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                RoptimizerConfigurationRequestTypeSupport, 
                RoptimizerConfigurationRequest);

            DDS_DATAWRITER_CPP(RoptimizerConfigurationRequestDataWriter, RoptimizerConfigurationRequest);
            DDS_DATAREADER_CPP(RoptimizerConfigurationRequestDataReader, RoptimizerConfigurationRequestSeq, RoptimizerConfigurationRequest);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
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

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                RoptimizerSteadyStateTypeSupport, 
                RoptimizerSteadyState);

            DDS_DATAWRITER_CPP(RoptimizerSteadyStateDataWriter, RoptimizerSteadyState);
            DDS_DATAREADER_CPP(RoptimizerSteadyStateDataReader, RoptimizerSteadyStateSeq, RoptimizerSteadyState);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace RoptimizerConfiguration  */
    } /* namespace Hmi  */
} /* namespace Shell  */

#endif  /* roptimizer_configurationSupport_360071563_h */

