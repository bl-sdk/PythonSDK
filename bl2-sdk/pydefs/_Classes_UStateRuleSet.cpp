#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStateRuleSet()
{
    py::class_< UStateRuleSet,  URuleSet   >("UStateRuleSet")
        .def_readwrite("StateRules", &UStateRuleSet::StateRules)
        .def_readwrite("StateAttributeMap", &UStateRuleSet::StateAttributeMap)
        .def("StaticClass", &UStateRuleSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}