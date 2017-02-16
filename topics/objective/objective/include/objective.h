

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objective.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef objective_1315698080_h
#define objective_1315698080_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace Plan {
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

        DataTypes::Uuid   id ;
        DataTypes::Time   timestamp ;
        DataTypes::Objective   objective ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* ObjectiveState_get_typecode(void); /* Type code */

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

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Plan  */

#endif /* objective */

