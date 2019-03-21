#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetWeaponFireRotation()
{
    py::class_< UBehavior_AISetWeaponFireRotation,  UBehaviorBase   >("UBehavior_AISetWeaponFireRotation")
        .def("StaticClass", &UBehavior_AISetWeaponFireRotation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AISetWeaponFireRotation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}