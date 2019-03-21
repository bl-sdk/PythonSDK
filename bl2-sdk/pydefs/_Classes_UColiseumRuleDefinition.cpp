#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UColiseumRuleDefinition()
{
    py::class_< UColiseumRuleDefinition,  UGBXDefinition   >("UColiseumRuleDefinition")
        .def_readwrite("RuleTitle", &UColiseumRuleDefinition::RuleTitle)
        .def_readwrite("RuleDescription", &UColiseumRuleDefinition::RuleDescription)
        .def_readwrite("FrameLabel", &UColiseumRuleDefinition::FrameLabel)
        .def("StaticClass", &UColiseumRuleDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}