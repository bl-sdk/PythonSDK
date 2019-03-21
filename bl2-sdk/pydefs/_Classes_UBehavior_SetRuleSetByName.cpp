#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetRuleSetByName()
{
    py::class_< UBehavior_SetRuleSetByName,  UBehaviorBase   >("UBehavior_SetRuleSetByName")
        .def("StaticClass", &UBehavior_SetRuleSetByName::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}