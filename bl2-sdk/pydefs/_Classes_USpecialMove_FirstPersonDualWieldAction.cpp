#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPersonDualWieldAction()
{
    class_< USpecialMove_FirstPersonDualWieldAction, bases< USpecialMove_FirstPerson >  , boost::noncopyable>("USpecialMove_FirstPersonDualWieldAction", no_init)
        .def_readwrite("OffHandAnimNodeName", &USpecialMove_FirstPersonDualWieldAction::OffHandAnimNodeName)
        .def_readwrite("HolsterAnimName", &USpecialMove_FirstPersonDualWieldAction::HolsterAnimName)
        .def_readwrite("HolsterDuration", &USpecialMove_FirstPersonDualWieldAction::HolsterDuration)
        .def_readwrite("EquipAnimName", &USpecialMove_FirstPersonDualWieldAction::EquipAnimName)
        .def_readwrite("EquipDuration", &USpecialMove_FirstPersonDualWieldAction::EquipDuration)
        .def("StaticClass", &USpecialMove_FirstPersonDualWieldAction::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAnimPlayRateScale", &USpecialMove_FirstPersonDualWieldAction::GetAnimPlayRateScale)
        .def("GetExternalPlayRateScale", &USpecialMove_FirstPersonDualWieldAction::GetExternalPlayRateScale)
        .def("GetSyncToActionLengthPlayRateScale", &USpecialMove_FirstPersonDualWieldAction::GetSyncToActionLengthPlayRateScale)
        .def("StopOffHandAnim", &USpecialMove_FirstPersonDualWieldAction::StopOffHandAnim)
        .def("SetDualWieldWeaponState", &USpecialMove_FirstPersonDualWieldAction::SetDualWieldWeaponState)
        .def("PlayChildAnim", &USpecialMove_FirstPersonDualWieldAction::PlayChildAnim)
        .def("PlayEquipAnim", &USpecialMove_FirstPersonDualWieldAction::PlayEquipAnim)
        .def("PlayActionAnim", &USpecialMove_FirstPersonDualWieldAction::PlayActionAnim)
        .def("PlayAnim", &USpecialMove_FirstPersonDualWieldAction::PlayAnim)
        .def("eventAnimFinished", &USpecialMove_FirstPersonDualWieldAction::eventAnimFinished)
        .def("StopWeaponRecoilAnim", &USpecialMove_FirstPersonDualWieldAction::StopWeaponRecoilAnim)
        .def("GetAnimLength", &USpecialMove_FirstPersonDualWieldAction::GetAnimLength)
        .staticmethod("StaticClass")
  ;
}