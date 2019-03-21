#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AITargeting(py::object m)
{
    py::class_< UBehavior_AITargeting,  UBehaviorBase   >(m, "UBehavior_AITargeting")
        .def_readwrite("NewTargetingDefinition", &UBehavior_AITargeting::NewTargetingDefinition)
        .def("StaticClass", &UBehavior_AITargeting::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AITargeting::ApplyBehaviorToContext)
          ;
}