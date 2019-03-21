#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponSettings()
{
    class_< FWeaponSettings >("FWeaponSettings", no_init)
        .def_readwrite("WeaponTypeDefinition", &FWeaponSettings::WeaponTypeDefinition)
        .def_readwrite("BalanceDefinition", &FWeaponSettings::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FWeaponSettings::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FWeaponSettings::ManufacturerGradeIndex)
        .def_readwrite("Level", &FWeaponSettings::Level)
        .def_readonly("GenericParts", &FWeaponSettings::GenericParts)
        .def_readwrite("CurrentPartBeingSet", &FWeaponSettings::CurrentPartBeingSet)
  ;
}