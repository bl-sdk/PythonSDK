#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowTurretWeapon()
{
    class_< AWillowTurretWeapon, bases< AWillowWeapon >  , boost::noncopyable>("AWillowTurretWeapon", no_init)
        .def_readwrite("FireTriggerTags", &AWillowTurretWeapon::FireTriggerTags)
        .def_readwrite("AltFireTriggerTags", &AWillowTurretWeapon::AltFireTriggerTags)
        .def_readwrite("AimTraceRange", &AWillowTurretWeapon::AimTraceRange)
        .def_readwrite("TurretWeaponSocketName", &AWillowTurretWeapon::TurretWeaponSocketName)
        .def("StaticClass", &AWillowTurretWeapon::StaticClass, return_value_policy< reference_existing_object >())
        .def("HasSpareAmmo", &AWillowTurretWeapon::HasSpareAmmo)
        .def("DetachMuzzleFlash", &AWillowTurretWeapon::DetachMuzzleFlash)
        .def("AttachMuzzleFlash", &AWillowTurretWeapon::AttachMuzzleFlash)
        .def("Behavior_ChangeVisibility", &AWillowTurretWeapon::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &AWillowTurretWeapon::Behavior_ToggleVisibility)
        .def("ChangeVisibility", &AWillowTurretWeapon::ChangeVisibility)
        .def("PlayAnimation", &AWillowTurretWeapon::PlayAnimation)
        .def("PlayFirstPersonBodyAnimation", &AWillowTurretWeapon::PlayFirstPersonBodyAnimation)
        .def("InstantFireStartTrace", &AWillowTurretWeapon::InstantFireStartTrace)
        .def("GetPhysicalFireStartLoc", &AWillowTurretWeapon::GetPhysicalFireStartLoc)
        .def("AttachThirdPersonMeshToComponent", &AWillowTurretWeapon::AttachThirdPersonMeshToComponent)
        .def("DetachFirstPersonMesh", &AWillowTurretWeapon::DetachFirstPersonMesh)
        .def("eventDetachThirdPersonMesh", &AWillowTurretWeapon::eventDetachThirdPersonMesh)
        .def("InitMeshes", &AWillowTurretWeapon::InitMeshes)
        .def("PostBeginPlay", &AWillowTurretWeapon::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}