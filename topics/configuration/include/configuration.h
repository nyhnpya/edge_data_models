

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef configuration_301632121_h
#define configuration_301632121_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace Configuration {
    static const char CONFIGURATION_ITEM[] = "ConfigurationItem"; 

    extern const char *ItemTYPENAME;

    struct ItemSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ItemTypeSupport;
    class ItemDataWriter;
    class ItemDataReader;
    #endif

    class Item 
    {
      public:
        typedef struct ItemSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ItemTypeSupport TypeSupport;
        typedef ItemDataWriter DataWriter;
        typedef ItemDataReader DataReader;
        #endif

        DDS_Char *   key ;
        DDS_Char *   value ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* Item_get_typecode(void); /* Type code */

    DDS_SEQUENCE(ItemSeq, Item);                                        

    NDDSUSERDllExport
    RTIBool Item_initialize(
        Item* self);

    NDDSUSERDllExport
    RTIBool Item_initialize_ex(
        Item* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Item_initialize_w_params(
        Item* self,
        const struct DDS_TypeAllocationParams_t * allocParams);        

    NDDSUSERDllExport
    void Item_finalize(
        Item* self);

    NDDSUSERDllExport
    void Item_finalize_ex(
        Item* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Item_finalize_w_params(
        Item* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Item_finalize_optional_members(
        Item* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Item_copy(
        Item* dst,
        const Item* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Configuration  */

#endif /* configuration */

