
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from circulate.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef circulateSupport_1746885981_h
#define circulateSupport_1746885981_h

/* Uses */
#include "circulate.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace nec {
    namespace process {
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
            CirculateRequestTypeSupport, 
            CirculateRequest);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(CirculateRequestDataWriter, CirculateRequest);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(CirculateRequestDataReader, CirculateRequestSeq, CirculateRequest);
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
            CirculateObjectiveTypeSupport, 
            CirculateObjective);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(CirculateObjectiveDataWriter, CirculateObjective);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(CirculateObjectiveDataReader, CirculateObjectiveSeq, CirculateObjective);
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
            CirculateStateTypeSupport, 
            CirculateState);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(CirculateStateDataWriter, CirculateState);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(CirculateStateDataReader, CirculateStateSeq, CirculateState);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace process  */
} /* namespace nec  */

#endif  /* circulateSupport_1746885981_h */
