

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ibop.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ibop_1624717976_h
#define ibop_1624717976_h

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
        typedef enum IbopStateEnum
        {
            Open ,      
            Close      
        } IbopStateEnum;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* IbopStateEnum_get_typecode(void); /* Type code */

        DDS_SEQUENCE(IbopStateEnumSeq, IbopStateEnum);

        NDDSUSERDllExport
        RTIBool IbopStateEnum_initialize(
            IbopStateEnum* self);

        NDDSUSERDllExport
        RTIBool IbopStateEnum_initialize_ex(
            IbopStateEnum* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool IbopStateEnum_initialize_w_params(
            IbopStateEnum* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void IbopStateEnum_finalize(
            IbopStateEnum* self);

        NDDSUSERDllExport
        void IbopStateEnum_finalize_ex(
            IbopStateEnum* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void IbopStateEnum_finalize_w_params(
            IbopStateEnum* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void IbopStateEnum_finalize_optional_members(
            IbopStateEnum* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool IbopStateEnum_copy(
            IbopStateEnum* dst,
            const IbopStateEnum* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char IBOP_REQUEST[] = "IbopRequest"; 

        extern const char *IbopRequestTYPENAME;

        struct IbopRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class IbopRequestTypeSupport;
        class IbopRequestDataWriter;
        class IbopRequestDataReader;
        #endif

        class IbopRequest 
        {
          public:
            typedef struct IbopRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef IbopRequestTypeSupport TypeSupport;
            typedef IbopRequestDataWriter DataWriter;
            typedef IbopRequestDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Priority   priority ;
            DataTypes::Time   timeNeeded ;
            DataTypes::Time   duration ;
            nec::control::IbopStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* IbopRequest_get_typecode(void); /* Type code */

        DDS_SEQUENCE(IbopRequestSeq, IbopRequest);

        NDDSUSERDllExport
        RTIBool IbopRequest_initialize(
            IbopRequest* self);

        NDDSUSERDllExport
        RTIBool IbopRequest_initialize_ex(
            IbopRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool IbopRequest_initialize_w_params(
            IbopRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void IbopRequest_finalize(
            IbopRequest* self);

        NDDSUSERDllExport
        void IbopRequest_finalize_ex(
            IbopRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void IbopRequest_finalize_w_params(
            IbopRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void IbopRequest_finalize_optional_members(
            IbopRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool IbopRequest_copy(
            IbopRequest* dst,
            const IbopRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char IBOP_OBJECTIVE[] = "IbopObjective"; 

        extern const char *IbopObjectiveTYPENAME;

        struct IbopObjectiveSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class IbopObjectiveTypeSupport;
        class IbopObjectiveDataWriter;
        class IbopObjectiveDataReader;
        #endif

        class IbopObjective 
        {
          public:
            typedef struct IbopObjectiveSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef IbopObjectiveTypeSupport TypeSupport;
            typedef IbopObjectiveDataWriter DataWriter;
            typedef IbopObjectiveDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Time   estimatedDuration ;
            nec::control::IbopStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* IbopObjective_get_typecode(void); /* Type code */

        DDS_SEQUENCE(IbopObjectiveSeq, IbopObjective);

        NDDSUSERDllExport
        RTIBool IbopObjective_initialize(
            IbopObjective* self);

        NDDSUSERDllExport
        RTIBool IbopObjective_initialize_ex(
            IbopObjective* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool IbopObjective_initialize_w_params(
            IbopObjective* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void IbopObjective_finalize(
            IbopObjective* self);

        NDDSUSERDllExport
        void IbopObjective_finalize_ex(
            IbopObjective* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void IbopObjective_finalize_w_params(
            IbopObjective* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void IbopObjective_finalize_optional_members(
            IbopObjective* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool IbopObjective_copy(
            IbopObjective* dst,
            const IbopObjective* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const char IBOP_STATE[] = "IbopState"; 

        extern const char *IbopStateTYPENAME;

        struct IbopStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class IbopStateTypeSupport;
        class IbopStateDataWriter;
        class IbopStateDataReader;
        #endif

        class IbopState 
        {
          public:
            typedef struct IbopStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef IbopStateTypeSupport TypeSupport;
            typedef IbopStateDataWriter DataWriter;
            typedef IbopStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Status   status ;
            DataTypes::Time   timestamp ;
            nec::control::IbopStateEnum   actualState ;
            nec::control::IbopStateEnum   targetState ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* IbopState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(IbopStateSeq, IbopState);

        NDDSUSERDllExport
        RTIBool IbopState_initialize(
            IbopState* self);

        NDDSUSERDllExport
        RTIBool IbopState_initialize_ex(
            IbopState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool IbopState_initialize_w_params(
            IbopState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void IbopState_finalize(
            IbopState* self);

        NDDSUSERDllExport
        void IbopState_finalize_ex(
            IbopState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void IbopState_finalize_w_params(
            IbopState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void IbopState_finalize_optional_members(
            IbopState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool IbopState_copy(
            IbopState* dst,
            const IbopState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* ibop */

