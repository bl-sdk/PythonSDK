#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIResetProvocation()
{
    py::class_< UBehavior_AIResetProvocation,  UBehaviorBase   >("UBehavior_AIResetProvocation")
        .def("StaticClass", &UBehavior_AIResetProvocation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIResetProvocation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}