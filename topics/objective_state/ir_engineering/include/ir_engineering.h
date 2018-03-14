

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ir_engineering.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ir_engineering_1886880695_h
#define ir_engineering_1886880695_h

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
        static const char IR_ENGINEERING_STATE[] = "IrEngineeringState"; 
        typedef enum GripState
        {
            Gripped ,      
            NotGripped      
        } GripState;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* GripState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(GripStateSeq, GripState);

        NDDSUSERDllExport
        RTIBool GripState_initialize(
            GripState* self);

        NDDSUSERDllExport
        RTIBool GripState_initialize_ex(
            GripState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GripState_initialize_w_params(
            GripState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void GripState_finalize(
            GripState* self);

        NDDSUSERDllExport
        void GripState_finalize_ex(
            GripState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void GripState_finalize_w_params(
            GripState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void GripState_finalize_optional_members(
            GripState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool GripState_copy(
            GripState* dst,
            const GripState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *PositionTYPENAME;

        struct PositionSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PositionTypeSupport;
        class PositionDataWriter;
        class PositionDataReader;
        #endif

        class Position 
        {
          public:
            typedef struct PositionSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PositionTypeSupport TypeSupport;
            typedef PositionDataWriter DataWriter;
            typedef PositionDataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* Position_get_typecode(void); /* Type code */

        DDS_SEQUENCE(PositionSeq, Position);

        NDDSUSERDllExport
        RTIBool Position_initialize(
            Position* self);

        NDDSUSERDllExport
        RTIBool Position_initialize_ex(
            Position* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Position_initialize_w_params(
            Position* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void Position_finalize(
            Position* self);

        NDDSUSERDllExport
        void Position_finalize_ex(
            Position* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Position_finalize_w_params(
            Position* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Position_finalize_optional_members(
            Position* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Position_copy(
            Position* dst,
            const Position* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *IrEngineeringStateTYPENAME;

        struct IrEngineeringStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class IrEngineeringStateTypeSupport;
        class IrEngineeringStateDataWriter;
        class IrEngineeringStateDataReader;
        #endif

        class IrEngineeringState 
        {
          public:
            typedef struct IrEngineeringStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef IrEngineeringStateTypeSupport TypeSupport;
            typedef IrEngineeringStateDataWriter DataWriter;
            typedef IrEngineeringStateDataReader DataReader;
            #endif

            DataTypes::Uuid   id ;
            DataTypes::Status   status ;
            DataTypes::Time   timestamp ;
            nec::control::GripState   lowerClampState ;
            nec::control::GripState   upperClampState ;
            nec::control::GripState   spinnerClampState ;
            DDS_Double   systemPressureActual ;
            DDS_Double   makeUpTorqueActual ;
            DDS_Double   upperClampPositionActual ;
            DDS_Double   spinnerOperationActual ;
            nec::control::Position   wrenchPositionActual ;
            DDS_Double   verticalVelocityMax ;
            DDS_Double   horizontalVelocityMax ;
            DDS_Double   rotationalVelocityMax ;
            DDS_Double   verticalVelocity ;
            DDS_Double   horizontalVelocity ;
            DDS_Double   rotationalVelocity ;
            DDS_Double   upperClampVelocity ;
            DDS_Double   spinnerOperationVelocity ;
            nec::control::Position   wrenchPosition ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        NDDSUSERDllExport DDS_TypeCode* IrEngineeringState_get_typecode(void); /* Type code */

        DDS_SEQUENCE(IrEngineeringStateSeq, IrEngineeringState);

        NDDSUSERDllExport
        RTIBool IrEngineeringState_initialize(
            IrEngineeringState* self);

        NDDSUSERDllExport
        RTIBool IrEngineeringState_initialize_ex(
            IrEngineeringState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool IrEngineeringState_initialize_w_params(
            IrEngineeringState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        void IrEngineeringState_finalize(
            IrEngineeringState* self);

        NDDSUSERDllExport
        void IrEngineeringState_finalize_ex(
            IrEngineeringState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void IrEngineeringState_finalize_w_params(
            IrEngineeringState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void IrEngineeringState_finalize_optional_members(
            IrEngineeringState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool IrEngineeringState_copy(
            IrEngineeringState* dst,
            const IrEngineeringState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace control  */
} /* namespace nec  */

#endif /* ir_engineering */

