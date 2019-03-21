#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowBuzzaxeWeapon()
{
    py::class_< AWillowBuzzaxeWeapon,  AWillowWeapon   >("AWillowBuzzaxeWeapon")
        .def_readwrite("VfTable_IIWeaponThrow", &AWillowBuzzaxeWeapon::VfTable_IIWeaponThrow)
        .def_readwrite("BodyWeaponHoldNameOverride", &AWillowBuzzaxeWeapon::BodyWeaponHoldNameOverride)
        .def_readwrite("PreviousActiveWeaponSlot", &AWillowBuzzaxeWeapon::PreviousActiveWeaponSlot)
        .def("StaticClass", &AWillowBuzzaxeWeapon::StaticClass, py::return_value_policy::reference)
        .def("EquipPreviousWeapon", &AWillowBuzzaxeWeapon::EquipPreviousWeapon)
        .def("BuzzaxeIsDown", &AWillowBuzzaxeWeapon::BuzzaxeIsDown)
        .def("eventGetCanHolster", &AWillowBuzzaxeWeapon::eventGetCanHolster)
        .def("eventDestroyed", &AWillowBuzzaxeWeapon::eventDestroyed)
        .def("GetBodyWeaponHoldName", &AWillowBuzzaxeWeapon::GetBodyWeaponHoldName)
        .def("Behavior_WeaponThrow", &AWillowBuzzaxeWeapon::Behavior_WeaponThrow)
        .def("eventProjectileDefinitionFire", &AWillowBuzzaxeWeapon::eventProjectileDefinitionFire, py::return_value_policy::reference)
        .def("ConditionalSetGearLikenessOnProjectile", &AWillowBuzzaxeWeapon::ConditionalSetGearLikenessOnProjectile)
        .def("DetachWeapon", &AWillowBuzzaxeWeapon::DetachWeapon)
        .def("StartFire", &AWillowBuzzaxeWeapon::StartFire)
        .def("Activate", &AWillowBuzzaxeWeapon::Activate)
        .def("HasSpareAmmo", &AWillowBuzzaxeWeapon::HasSpareAmmo)
        .def("eventReplicatedEvent", &AWillowBuzzaxeWeapon::eventReplicatedEvent)
        .def("InitVisibleAmmoBones", &AWillowBuzzaxeWeapon::InitVisibleAmmoBones)
        .def("AssociateAmmoPool", &AWillowBuzzaxeWeapon::AssociateAmmoPool)
        .def("DetachMuzzleFlash", &AWillowBuzzaxeWeapon::DetachMuzzleFlash)
        .def("AttachMuzzleFlash", &AWillowBuzzaxeWeapon::AttachMuzzleFlash)
        .def("IsCrosshairEnabled", &AWillowBuzzaxeWeapon::IsCrosshairEnabled)
        .def("GetZoomFOVEffect", &AWillowBuzzaxeWeapon::GetZoomFOVEffect)
        .def("GetZoomSocket", &AWillowBuzzaxeWeapon::GetZoomSocket)
        .staticmethod("StaticClass")
  ;
}