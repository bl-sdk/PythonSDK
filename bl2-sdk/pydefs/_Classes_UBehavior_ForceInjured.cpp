#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ForceInjured()
{
    py::class_< UBehavior_ForceInjured,  UBehaviorBase   >("UBehavior_ForceInjured")
        .def("StaticClass", &UBehavior_ForceInjured::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ForceInjured::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}