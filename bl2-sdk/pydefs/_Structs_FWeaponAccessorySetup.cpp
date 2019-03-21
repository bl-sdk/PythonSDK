#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponAccessorySetup(py::object m)
{
    py::class_< FWeaponAccessorySetup >(m, "FWeaponAccessorySetup")
        .def_readwrite("WeaponArchetypeName", &FWeaponAccessorySetup::WeaponArchetypeName)
        .def_readwrite("AccessoryDefinition", &FWeaponAccessorySetup::AccessoryDefinition)
        .def_readwrite("AccessoryTransforms", &FWeaponAccessorySetup::AccessoryTransforms)
        .def_readwrite("AccessoryParts", &FWeaponAccessorySetup::AccessoryParts)
  ;
}