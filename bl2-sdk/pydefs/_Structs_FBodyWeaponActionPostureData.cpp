#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyWeaponActionPostureData(py::module &m)
{
    py::class_< FBodyWeaponActionPostureData >(m, "FBodyWeaponActionPostureData")
        .def_readwrite("Posture", &FBodyWeaponActionPostureData::Posture)
        .def_readwrite("Actions", &FBodyWeaponActionPostureData::Actions)
  ;
}