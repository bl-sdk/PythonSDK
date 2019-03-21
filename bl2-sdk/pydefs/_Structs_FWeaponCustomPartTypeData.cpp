#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponCustomPartTypeData()
{
    py::class_< FWeaponCustomPartTypeData >("FWeaponCustomPartTypeData")
        .def_readwrite("WeightedParts", &FWeaponCustomPartTypeData::WeightedParts)
  ;
}