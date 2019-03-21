#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetBeingHealed()
{
    py::class_< UBehavior_SetBeingHealed,  UBehaviorBase   >("UBehavior_SetBeingHealed")
        .def("StaticClass", &UBehavior_SetBeingHealed::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetBeingHealed::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}