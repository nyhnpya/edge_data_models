

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from configuration.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef configuration_301633329_h
#define configuration_301633329_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace Configuration {
    typedef enum config_type
    {
        PROTOCOL ,      
        INTERFACE ,      
        TAG      
    } config_type;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * config_type_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *config_type_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *config_type_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *config_type_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(config_typeSeq, config_type);

    NDDSUSERDllExport
    RTIBool config_type_initialize(
        config_type* self);

    NDDSUSERDllExport
    RTIBool config_type_initialize_ex(
        config_type* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool config_type_initialize_w_params(
        config_type* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool config_type_finalize_w_return(
        config_type* self);

    NDDSUSERDllExport
    void config_type_finalize(
        config_type* self);

    NDDSUSERDllExport
    void config_type_finalize_ex(
        config_type* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void config_type_finalize_w_params(
        config_type* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void config_type_finalize_optional_members(
        config_type* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool config_type_copy(
        config_type* dst,
        const config_type* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum io_mode
    {
        READ ,      
        WRITE      
    } io_mode;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * io_mode_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *io_mode_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *io_mode_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *io_mode_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(io_modeSeq, io_mode);

    NDDSUSERDllExport
    RTIBool io_mode_initialize(
        io_mode* self);

    NDDSUSERDllExport
    RTIBool io_mode_initialize_ex(
        io_mode* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool io_mode_initialize_w_params(
        io_mode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool io_mode_finalize_w_return(
        io_mode* self);

    NDDSUSERDllExport
    void io_mode_finalize(
        io_mode* self);

    NDDSUSERDllExport
    void io_mode_finalize_ex(
        io_mode* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void io_mode_finalize_w_params(
        io_mode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void io_mode_finalize_optional_members(
        io_mode* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool io_mode_copy(
        io_mode* dst,
        const io_mode* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum plant_type
    {
        BOOLEAN ,      
        INT8 ,      
        UNSIGNEDINT8 ,      
        INT16 ,      
        UNSIGNEDINT16 ,      
        INT32 ,      
        UNSIGNEDINT32 ,      
        INT64 ,      
        UNSIGNEDINT64 ,      
        FLOAT ,      
        DOUBLE      
    } plant_type;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * plant_type_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *plant_type_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *plant_type_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *plant_type_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(plant_typeSeq, plant_type);

    NDDSUSERDllExport
    RTIBool plant_type_initialize(
        plant_type* self);

    NDDSUSERDllExport
    RTIBool plant_type_initialize_ex(
        plant_type* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool plant_type_initialize_w_params(
        plant_type* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool plant_type_finalize_w_return(
        plant_type* self);

    NDDSUSERDllExport
    void plant_type_finalize(
        plant_type* self);

    NDDSUSERDllExport
    void plant_type_finalize_ex(
        plant_type* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void plant_type_finalize_w_params(
        plant_type* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void plant_type_finalize_optional_members(
        plant_type* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool plant_type_copy(
        plant_type* dst,
        const plant_type* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *protocol_tTYPENAME;

    struct protocol_tSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class protocol_tTypeSupport;
    class protocol_tDataWriter;
    class protocol_tDataReader;
    #endif
    class protocol_t 
    {
      public:
        typedef struct protocol_tSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef protocol_tTypeSupport TypeSupport;
        typedef protocol_tDataWriter DataWriter;
        typedef protocol_tDataReader DataReader;
        #endif

        DDS_Char *   protocolId ;
        DDS_Char *   protocol ;
        DDS_Char *   endpoint ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * protocol_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *protocol_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *protocol_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *protocol_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(protocol_tSeq, protocol_t);

    NDDSUSERDllExport
    RTIBool protocol_t_initialize(
        protocol_t* self);

    NDDSUSERDllExport
    RTIBool protocol_t_initialize_ex(
        protocol_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool protocol_t_initialize_w_params(
        protocol_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool protocol_t_finalize_w_return(
        protocol_t* self);

    NDDSUSERDllExport
    void protocol_t_finalize(
        protocol_t* self);

    NDDSUSERDllExport
    void protocol_t_finalize_ex(
        protocol_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void protocol_t_finalize_w_params(
        protocol_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void protocol_t_finalize_optional_members(
        protocol_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool protocol_t_copy(
        protocol_t* dst,
        const protocol_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *interface_tTYPENAME;

    struct interface_tSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class interface_tTypeSupport;
    class interface_tDataWriter;
    class interface_tDataReader;
    #endif
    class interface_t 
    {
      public:
        typedef struct interface_tSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef interface_tTypeSupport TypeSupport;
        typedef interface_tDataWriter DataWriter;
        typedef interface_tDataReader DataReader;
        #endif

        Configuration::io_mode   mode ;
        DDS_Char *   ddsInterface ;
        DDS_Char *   protocolId ;
        DDS_Char *   baseAddress ;
        DDS_Char *   size ;
        DDS_Char *   frequency ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * interface_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *interface_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *interface_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *interface_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(interface_tSeq, interface_t);

    NDDSUSERDllExport
    RTIBool interface_t_initialize(
        interface_t* self);

    NDDSUSERDllExport
    RTIBool interface_t_initialize_ex(
        interface_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool interface_t_initialize_w_params(
        interface_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool interface_t_finalize_w_return(
        interface_t* self);

    NDDSUSERDllExport
    void interface_t_finalize(
        interface_t* self);

    NDDSUSERDllExport
    void interface_t_finalize_ex(
        interface_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void interface_t_finalize_w_params(
        interface_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void interface_t_finalize_optional_members(
        interface_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool interface_t_copy(
        interface_t* dst,
        const interface_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *tag_tTYPENAME;

    struct tag_tSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class tag_tTypeSupport;
    class tag_tDataWriter;
    class tag_tDataReader;
    #endif
    class tag_t 
    {
      public:
        typedef struct tag_tSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef tag_tTypeSupport TypeSupport;
        typedef tag_tDataWriter DataWriter;
        typedef tag_tDataReader DataReader;
        #endif

        DDS_Char *   ddsInterface ;
        DDS_Char *   edgeType ;
        DDS_Char *   edgeUnit ;
        DDS_Char *   ioType ;
        DDS_Char *   ioUnit ;
        DDS_Char *   convertUnit ;
        DDS_Char *   floatEpsilon ;
        DDS_Char *   tag ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * tag_t_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *tag_t_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *tag_t_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *tag_t_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(tag_tSeq, tag_t);

    NDDSUSERDllExport
    RTIBool tag_t_initialize(
        tag_t* self);

    NDDSUSERDllExport
    RTIBool tag_t_initialize_ex(
        tag_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool tag_t_initialize_w_params(
        tag_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool tag_t_finalize_w_return(
        tag_t* self);

    NDDSUSERDllExport
    void tag_t_finalize(
        tag_t* self);

    NDDSUSERDllExport
    void tag_t_finalize_ex(
        tag_t* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void tag_t_finalize_w_params(
        tag_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void tag_t_finalize_optional_members(
        tag_t* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool tag_t_copy(
        tag_t* dst,
        const tag_t* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *config_dataTYPENAME;

    struct config_dataSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class config_dataTypeSupport;
    class config_dataDataWriter;
    class config_dataDataReader;
    #endif

    typedef struct config_data {
        typedef struct config_dataSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef config_dataTypeSupport TypeSupport;
        typedef config_dataDataWriter DataWriter;
        typedef config_dataDataReader DataReader;
        #endif

        Configuration::config_type _d;
        struct config_data_u 
        {

            Configuration::protocol_t   protocolSpec ;
            Configuration::interface_t   interfaceSpec ;
            Configuration::tag_t   tagSpec ;
        }_u;

    } config_data ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * config_data_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *config_data_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *config_data_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *config_data_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(config_dataSeq, config_data);

    NDDSUSERDllExport
    RTIBool config_data_initialize(
        config_data* self);

    NDDSUSERDllExport
    RTIBool config_data_initialize_ex(
        config_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool config_data_initialize_w_params(
        config_data* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool config_data_finalize_w_return(
        config_data* self);

    NDDSUSERDllExport
    void config_data_finalize(
        config_data* self);

    NDDSUSERDllExport
    void config_data_finalize_ex(
        config_data* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void config_data_finalize_w_params(
        config_data* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void config_data_finalize_optional_members(
        config_data* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool config_data_copy(
        config_data* dst,
        const config_data* src);

    NDDSUSERDllExport
    DDS_LongLong config_data_getDefaultDiscriminator(void);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
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
        Configuration::config_type   configType ;
        Configuration::config_data   configData ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Item_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Item_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Item_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Item_get_sample_seq_access_info(void);
    #endif

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
    RTIBool Item_finalize_w_return(
        Item* self);

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

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace Configuration  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<Configuration::protocol_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Configuration::interface_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Configuration::tag_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Configuration::config_data> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<Configuration::Item> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* configuration */

