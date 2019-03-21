#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RuleEvent()
{
    py::class_< UBehavior_RuleEvent,  UBehaviorBase   >("UBehavior_RuleEvent")
        .def("StaticClass", &UBehavior_RuleEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}