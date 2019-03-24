#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDamageSource(py::module &m)
{
    py::class_< UWillowDamageSource,  UDamageType   >(m, "UWillowDamageSource")
		.def_static("StaticClass", &UWillowDamageSource::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GibPerterbation", &UWillowDamageType::GibPerterbation)
        .def_readwrite("DamageWeaponClass", &UWillowDamageType::DamageWeaponClass)
        .def_readwrite("DamageWeaponFireMode", &UWillowDamageType::DamageWeaponFireMode)
        .def_readwrite("UBMKilledByMessageString", &UWillowDamageType::UBMKilledByMessageString)
        .def("CanDamageSourceBeAbsorbedByShields", &UWillowDamageSource::CanDamageSourceBeAbsorbedByShields)
        .def("ShouldDamageSourcePenetrateShields", &UWillowDamageSource::ShouldDamageSourcePenetrateShields)
        .def("GetAmmoTheftAmounts", &UWillowDamageSource::GetAmmoTheftAmounts)
        .def("PawnTornOff", &UWillowDamageType::PawnTornOff)
        .def("SpawnHitEffect", &UWillowDamageType::SpawnHitEffect)
          ;
}