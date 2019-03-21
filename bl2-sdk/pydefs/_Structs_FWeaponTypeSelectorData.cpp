#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponTypeSelectorData()
{
    py::class_< FWeaponTypeSelectorData >("FWeaponTypeSelectorData")
        .def_readwrite("WeaponType", &FWeaponTypeSelectorData::WeaponType)
        .def_readwrite("ValueIfMatched", &FWeaponTypeSelectorData::ValueIfMatched)
  ;
}