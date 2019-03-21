#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponClassEventData()
{
    py::class_< FWeaponClassEventData >("FWeaponClassEventData")
        .def_readwrite("WeaponClassName", &FWeaponClassEventData::WeaponClassName)
  ;
}