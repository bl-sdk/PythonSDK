#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponSettings(py::object m)
{
    py::class_< FWeaponSettings >(m, "FWeaponSettings")
        .def_readwrite("WeaponTypeDefinition", &FWeaponSettings::WeaponTypeDefinition)
        .def_readwrite("BalanceDefinition", &FWeaponSettings::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FWeaponSettings::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FWeaponSettings::ManufacturerGradeIndex)
        .def_readwrite("Level", &FWeaponSettings::Level)
        .def_readwrite("CurrentPartBeingSet", &FWeaponSettings::CurrentPartBeingSet)
  ;
}