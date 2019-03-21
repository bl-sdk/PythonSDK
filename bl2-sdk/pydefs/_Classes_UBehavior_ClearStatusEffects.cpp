#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClearStatusEffects()
{
    py::class_< UBehavior_ClearStatusEffects,  UBehaviorBase   >("UBehavior_ClearStatusEffects")
        .def("StaticClass", &UBehavior_ClearStatusEffects::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ClearStatusEffects::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}