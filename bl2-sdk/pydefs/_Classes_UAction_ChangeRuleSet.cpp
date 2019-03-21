#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_ChangeRuleSet()
{
    py::class_< UAction_ChangeRuleSet,  UActionSequence   >("UAction_ChangeRuleSet")
        .def_readwrite("NewRuleSet", &UAction_ChangeRuleSet::NewRuleSet)
        .def("StaticClass", &UAction_ChangeRuleSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}