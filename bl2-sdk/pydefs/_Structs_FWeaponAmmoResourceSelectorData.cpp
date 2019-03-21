#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponAmmoResourceSelectorData(py::object m)
{
    py::class_< FWeaponAmmoResourceSelectorData >(m, "FWeaponAmmoResourceSelectorData")
        .def_readwrite("AssociatedResourceName", &FWeaponAmmoResourceSelectorData::AssociatedResourceName)
        .def_readwrite("ValueIfMatched", &FWeaponAmmoResourceSelectorData::ValueIfMatched)
  ;
}