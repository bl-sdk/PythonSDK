#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeaponThrow()
{
    py::class_< UIWeaponThrow,  UInterface   >("UIWeaponThrow")
        .def("StaticClass", &UIWeaponThrow::StaticClass, py::return_value_policy::reference)
        .def("Behavior_WeaponThrow", &UIWeaponThrow::Behavior_WeaponThrow)
        .staticmethod("StaticClass")
  ;
}