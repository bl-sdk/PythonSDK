#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPersonDualWieldAction(py::module &m)
{
    py::class_< USpecialMove_FirstPersonDualWieldAction,  USpecialMove_FirstPerson   >(m, "USpecialMove_FirstPersonDualWieldAction")
        .def_readwrite("OffHandAnimNodeName", &USpecialMove_FirstPersonDualWieldAction::OffHandAnimNodeName)
        .def_readwrite("HolsterAnimName", &USpecialMove_FirstPersonDualWieldAction::HolsterAnimName)
        .def_readwrite("HolsterDuration", &USpecialMove_FirstPersonDualWieldAction::HolsterDuration)
        .def_readwrite("EquipAnimName", &USpecialMove_FirstPersonDualWieldAction::EquipAnimName)
        .def_readwrite("EquipDuration", &USpecialMove_FirstPersonDualWieldAction::EquipDuration)
        .def("StaticClass", &USpecialMove_FirstPersonDualWieldAction::StaticClass, py::return_value_policy::reference)
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
          ;
}