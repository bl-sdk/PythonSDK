#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleNPCAlly()
{
    py::class_< UBehavior_ToggleNPCAlly,  UBehaviorBase   >("UBehavior_ToggleNPCAlly")
        .def("StaticClass", &UBehavior_ToggleNPCAlly::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleNPCAlly::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}