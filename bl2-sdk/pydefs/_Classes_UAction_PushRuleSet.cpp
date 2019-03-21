#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_PushRuleSet()
{
    py::class_< UAction_PushRuleSet,  UActionSequencePawn   >("UAction_PushRuleSet")
        .def_readwrite("NewRuleSet", &UAction_PushRuleSet::NewRuleSet)
        .def("StaticClass", &UAction_PushRuleSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}