#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponClassEventData(py::module &m)
{
    py::class_< FWeaponClassEventData >(m, "FWeaponClassEventData")
        .def_readwrite("WeaponClassName", &FWeaponClassEventData::WeaponClassName)
  ;
}