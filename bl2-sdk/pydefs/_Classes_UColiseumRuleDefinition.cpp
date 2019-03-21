#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UColiseumRuleDefinition(py::object m)
{
    py::class_< UColiseumRuleDefinition,  UGBXDefinition   >(m, "UColiseumRuleDefinition")
        .def_readwrite("RuleTitle", &UColiseumRuleDefinition::RuleTitle)
        .def_readwrite("RuleDescription", &UColiseumRuleDefinition::RuleDescription)
        .def_readwrite("FrameLabel", &UColiseumRuleDefinition::FrameLabel)
        .def("StaticClass", &UColiseumRuleDefinition::StaticClass, py::return_value_policy::reference)
          ;
}