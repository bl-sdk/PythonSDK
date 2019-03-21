#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Conditional()
{
    py::class_< UBehavior_Conditional,  UBehaviorBase   >("UBehavior_Conditional")
        .def_readwrite("Conditions", &UBehavior_Conditional::Conditions)
        .def("StaticClass", &UBehavior_Conditional::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Conditional::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}