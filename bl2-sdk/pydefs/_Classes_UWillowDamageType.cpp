#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDamageType(py::module &m)
{
    py::class_< UWillowDamageType,  UDamageType   >(m, "UWillowDamageType")
        .def_readwrite("GibPerterbation", &UWillowDamageType::GibPerterbation)
        .def_readwrite("DamageWeaponClass", &UWillowDamageType::DamageWeaponClass)
        .def_readwrite("DamageWeaponFireMode", &UWillowDamageType::DamageWeaponFireMode)
        .def_readwrite("UBMKilledByMessageString", &UWillowDamageType::UBMKilledByMessageString)
        .def("StaticClass", &UWillowDamageType::StaticClass, py::return_value_policy::reference)
        .def("PawnTornOff", &UWillowDamageType::PawnTornOff)
        .def("SpawnHitEffect", &UWillowDamageType::SpawnHitEffect)
          ;
}