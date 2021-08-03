

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef objective_1315698935_h
#define objective_1315698935_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace process {
    namespace plan {
        static const char OBJECTIVE_STATE[] = "ObjectiveState"; 

        extern const char *ObjectiveStateTYPENAME;

        struct ObjectiveStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ObjectiveStateTypeSupport;
        class ObjectiveStateDataWriter;
        class ObjectiveStateDataReader;
        #endif
        class ObjectiveState 
        {
          public:
            typedef struct ObjectiveStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ObjectiveStateTypeSupport TypeSupport;
            typedef ObjectiveStateDataWriter DataWriter;
            typedef ObjectiveStateDataReader DataReader;
            #endif

            DDS_Char *   id ;
            DDS_Char *   parentId ;
            DataTypes::Time   timestamp ;
            DataTypes::Objective   objective ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * ObjectiveState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ObjectiveState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectiveState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectiveState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ObjectiveStateSeq, ObjectiveState);

        NDDSUSERDllExport
        RTIBool ObjectiveState_initialize(
            ObjectiveState* self);

        NDDSUSERDllExport
        RTIBool ObjectiveState_initialize_ex(
            ObjectiveState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ObjectiveState_initialize_w_params(
            ObjectiveState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ObjectiveState_finalize_w_return(
            ObjectiveState* self);

        NDDSUSERDllExport
        void ObjectiveState_finalize(
            ObjectiveState* self);

        NDDSUSERDllExport
        void ObjectiveState_finalize_ex(
            ObjectiveState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ObjectiveState_finalize_w_params(
            ObjectiveState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ObjectiveState_finalize_optional_members(
            ObjectiveState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ObjectiveState_copy(
            ObjectiveState* dst,
            const ObjectiveState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace plan  */
} /* namespace process  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<process::plan::ObjectiveState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* objective */

