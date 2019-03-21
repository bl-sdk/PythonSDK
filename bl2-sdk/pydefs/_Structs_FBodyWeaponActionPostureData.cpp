#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyWeaponActionPostureData()
{
    py::class_< FBodyWeaponActionPostureData >("FBodyWeaponActionPostureData")
        .def_readwrite("Posture", &FBodyWeaponActionPostureData::Posture)
        .def_readwrite("Actions", &FBodyWeaponActionPostureData::Actions)
  ;
}