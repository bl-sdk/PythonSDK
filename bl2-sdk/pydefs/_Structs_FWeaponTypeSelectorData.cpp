#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponTypeSelectorData(py::object m)
{
    py::class_< FWeaponTypeSelectorData >(m, "FWeaponTypeSelectorData")
        .def_readwrite("WeaponType", &FWeaponTypeSelectorData::WeaponType)
        .def_readwrite("ValueIfMatched", &FWeaponTypeSelectorData::ValueIfMatched)
  ;
}