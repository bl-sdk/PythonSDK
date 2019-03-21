#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponAmmoResourceSelectorData()
{
    py::class_< FWeaponAmmoResourceSelectorData >("FWeaponAmmoResourceSelectorData")
        .def_readwrite("AssociatedResourceName", &FWeaponAmmoResourceSelectorData::AssociatedResourceName)
        .def_readwrite("ValueIfMatched", &FWeaponAmmoResourceSelectorData::ValueIfMatched)
  ;
}