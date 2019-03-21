#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetSpeed()
{
    py::class_< UProjectileBehavior_SetSpeed,  UProjectileBehaviorBase   >("UProjectileBehavior_SetSpeed")
        .def_readwrite("NewSpeed", &UProjectileBehavior_SetSpeed::NewSpeed)
        .def_readwrite("SpeedMultiplier", &UProjectileBehavior_SetSpeed::SpeedMultiplier)
        .def("StaticClass", &UProjectileBehavior_SetSpeed::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetSpeed::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}