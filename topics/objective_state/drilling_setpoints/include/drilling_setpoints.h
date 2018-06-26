

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from drilling_setpoints.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef drilling_setpoints_937584715_h
#define drilling_setpoints_937584715_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace process {
    namespace plan {
        static const char DRILLING_SETPOINT[] = "DrillingSetpoints"; 

        extern const char *DrillingSetpointsTYPENAME;

        struct DrillingSetpointsSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DrillingSetpointsTypeSupport;
        class DrillingSetpointsDataWriter;
        class DrillingSetpointsDataReader;
        #endif

        class DrillingSetpoints 
        {
          public:
            typedef struct DrillingSetpointsSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DrillingSetpointsTypeSupport TypeSupport;
            typedef DrillingSetpointsDataWriter DataWriter;
            typedef DrillingSetpointsDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DDS_Double   startDepth ;
            DDS_Double   endDepth ;
            DDS_Double   ropMin ;
            DDS_Double   ropMax ;
            DDS_Double   wobMin ;
            DDS_Double   wobMax ;
            DDS_Double   deltaPMin ;
            DDS_Double   deltaPMax ;
            DDS_Double   torqueMin ;
            DDS_Double   torqueMax ;
            DDS_Double   rotateMin ;
            DDS_Double   rotateMax ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* DrillingSetpoints_get_typecode(void); /* Type code */

        DDS_SEQUENCE(DrillingSetpointsSeq, DrillingSetpoints);

        NDDSUSERDllExport
        RTIBool DrillingSetpoints_initialize(
            DrillingSetpoints* self);

        NDDSUSERDllExport
        RTIBool DrillingSetpoints_initialize_ex(
            DrillingSetpoints* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool DrillingSetpoints_initialize_w_params(
            DrillingSetpoints* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void DrillingSetpoints_finalize(
            DrillingSetpoints* self);

        NDDSUSERDllExport
        void DrillingSetpoints_finalize_ex(
            DrillingSetpoints* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void DrillingSetpoints_finalize_w_params(
            DrillingSetpoints* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void DrillingSetpoints_finalize_optional_members(
            DrillingSetpoints* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool DrillingSetpoints_copy(
            DrillingSetpoints* dst,
            const DrillingSetpoints* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace plan  */
} /* namespace process  */

#endif /* drilling_setpoints */

