

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from slips.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef slips_441129141_h
#define slips_441129141_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "base_data_types.h"
namespace nec {
    namespace control {
        typedef enum SlipsStateEnum
        {
            Set ,      
            NotSet      
        } SlipsStateEnum;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* SlipsStateEnum_get_typecode(void); /* Type code */

        DDS_SEQUENCE(SlipsStateEnumSeq, SlipsStateEnum);

        NDDSUSERDllExport
        RTIBool SlipsStateEnum_initialize(
            SlipsStateEnum* self);

        NDDSUSERDllExport
        RTIBool SlipsStateEnum_initialize_ex(
            SlipsStateEnum* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SlipsStateEnum_initialize_w_params(
            SlipsStateEnum* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void SlipsStateEnum_finalize(
            SlipsStateEnum* self);

        NDDSUSERDllExport
        void SlipsStateEnum_finalize_ex(
            SlipsStateEnum* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SlipsStateEnum_finalize_w_params(
            SlipsStateEnum* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SlipsStateEnum_finalize_optional_members(
            SlipsStateEnum* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SlipsStateEnum_copy(
            SlipsStateEnum* dst,
            const SlipsStateEnum* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char SLIPS_REQUEST[] = "SlipsRequest"; 

        extern const char *SlipsRequestTYPENAME;

        struct SlipsRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SlipsRequestTypeSupport;
        class SlipsRequestDataWriter;
        class SlipsRequestDataReader;
        #endif

        class SlipsRequest 
        {
          public:
            typedef struct SlipsRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SlipsRequestTypeSupport TypeSupport;
            typedef SlipsRequestDataWriter DataWriter;
            typedef SlipsRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            nec::control::SlipsStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* SlipsRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(SlipsRequestSeq, SlipsRequest);

        NDDSUSERDllExport
        RTIBool SlipsRequest_initialize(
            SlipsRequest* self);

        NDDSUSERDllExport
        RTIBool SlipsRequest_initialize_ex(
            SlipsRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SlipsRequest_initialize_w_params(
            SlipsRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void SlipsRequest_finalize(
            SlipsRequest* self);

        NDDSUSERDllExport
        void SlipsRequest_finalize_ex(
            SlipsRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SlipsRequest_finalize_w_params(
            SlipsRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SlipsRequest_finalize_optional_members(
            SlipsRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SlipsRequest_copy(
            SlipsRequest* dst,
            const SlipsRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char SLIPS_OBJECTIVE[] = "SlipsObjective"; 

        extern const char *SlipsObjectiveTYPENAME;

        struct SlipsObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SlipsObjectiveTypeSupport;
        class SlipsObjectiveDataWriter;
        class SlipsObjectiveDataReader;
        #endif

        class SlipsObjective 
        {
          public:
            typedef struct SlipsObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SlipsObjectiveTypeSupport TypeSupport;
            typedef SlipsObjectiveDataWriter DataWriter;
            typedef SlipsObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Time   estimatedDuration ;
            nec::control::SlipsStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* SlipsObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(SlipsObjectiveSeq, SlipsObjective);

        NDDSUSERDllExport
        RTIBool SlipsObjective_initialize(
            SlipsObjective* self);

        NDDSUSERDllExport
        RTIBool SlipsObjective_initialize_ex(
            SlipsObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SlipsObjective_initialize_w_params(
            SlipsObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void SlipsObjective_finalize(
            SlipsObjective* self);

        NDDSUSERDllExport
        void SlipsObjective_finalize_ex(
            SlipsObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SlipsObjective_finalize_w_params(
            SlipsObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SlipsObjective_finalize_optional_members(
            SlipsObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SlipsObjective_copy(
            SlipsObjective* dst,
            const SlipsObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char SLIPS_STATE[] = "SlipsState"; 

        extern const char *SlipsStateTYPENAME;

        struct SlipsStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SlipsStateTypeSupport;
        class SlipsStateDataWriter;
        class SlipsStateDataReader;
        #endif

        class SlipsState 
        {
          public:
            typedef struct SlipsStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SlipsStateTypeSupport TypeSupport;
            typedef SlipsStateDataWriter DataWriter;
            typedef SlipsStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Status   status ;
            DataTypes::Time   timestamp ;
            nec::control::SlipsStateEnum   actualState ;
            nec::control::SlipsStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* SlipsState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(SlipsStateSeq, SlipsState);

        NDDSUSERDllExport
        RTIBool SlipsState_initialize(
            SlipsState* self);

        NDDSUSERDllExport
        RTIBool SlipsState_initialize_ex(
            SlipsState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SlipsState_initialize_w_params(
            SlipsState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void SlipsState_finalize(
            SlipsState* self);

        NDDSUSERDllExport
        void SlipsState_finalize_ex(
            SlipsState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SlipsState_finalize_w_params(
            SlipsState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SlipsState_finalize_optional_members(
            SlipsState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SlipsState_copy(
            SlipsState* dst,
            const SlipsState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* slips */

