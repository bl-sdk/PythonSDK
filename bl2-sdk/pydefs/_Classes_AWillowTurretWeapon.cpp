#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTurretWeapon(py::object m)
{
    py::class_< AWillowTurretWeapon,  AWillowWeapon   >(m, "AWillowTurretWeapon")
        .def_readwrite("FireTriggerTags", &AWillowTurretWeapon::FireTriggerTags)
        .def_readwrite("AltFireTriggerTags", &AWillowTurretWeapon::AltFireTriggerTags)
        .def_readwrite("AimTraceRange", &AWillowTurretWeapon::AimTraceRange)
        .def_readwrite("TurretWeaponSocketName", &AWillowTurretWeapon::TurretWeaponSocketName)
        .def("StaticClass", &AWillowTurretWeapon::StaticClass, py::return_value_policy::reference)
        .def("HasSpareAmmo", &AWillowTurretWeapon::HasSpareAmmo)
        .def("DetachMuzzleFlash", &AWillowTurretWeapon::DetachMuzzleFlash)
        .def("AttachMuzzleFlash", &AWillowTurretWeapon::AttachMuzzleFlash)
        .def("Behavior_ChangeVisibility", &AWillowTurretWeapon::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &AWillowTurretWeapon::Behavior_ToggleVisibility)
        .def("ChangeVisibility", &AWillowTurretWeapon::ChangeVisibility)
        .def("PlayAnimation", &AWillowTurretWeapon::PlayAnimation)
        .def("PlayFirstPersonBodyAnimation", [](AWillowTurretWeapon &self , unsigned char ActionType, float PlayRateScale, float Duration) { class USpecialMoveDefinition** pyPlayedSMD = 0 ;  float ret =  self.PlayFirstPersonBodyAnimation(ActionType, PlayRateScale, Duration, pyPlayedSMD); return py::make_tuple(ret, *pyPlayedSMD); })
        .def("InstantFireStartTrace", &AWillowTurretWeapon::InstantFireStartTrace)
        .def("GetPhysicalFireStartLoc", &AWillowTurretWeapon::GetPhysicalFireStartLoc)
        .def("AttachThirdPersonMeshToComponent", &AWillowTurretWeapon::AttachThirdPersonMeshToComponent)
        .def("DetachFirstPersonMesh", &AWillowTurretWeapon::DetachFirstPersonMesh)
        .def("eventDetachThirdPersonMesh", &AWillowTurretWeapon::eventDetachThirdPersonMesh)
        .def("InitMeshes", &AWillowTurretWeapon::InitMeshes)
        .def("PostBeginPlay", &AWillowTurretWeapon::PostBeginPlay)
          ;
}