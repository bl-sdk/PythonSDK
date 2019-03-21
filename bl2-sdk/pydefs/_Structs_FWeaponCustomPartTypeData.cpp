#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponCustomPartTypeData(py::object m)
{
    py::class_< FWeaponCustomPartTypeData >(m, "FWeaponCustomPartTypeData")
        .def_readwrite("WeightedParts", &FWeaponCustomPartTypeData::WeightedParts)
  ;
}