#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleInfo(py::object m)
{
    py::class_< FRuleInfo >(m, "FRuleInfo")
        .def_readwrite("RuleName", &FRuleInfo::RuleName)
        .def_readwrite("RuleNameString", &FRuleInfo::RuleNameString)
        .def_readwrite("RunningSequence", &FRuleInfo::RunningSequence)
        .def_readwrite("LatentAction", &FRuleInfo::LatentAction)
        .def_readwrite("ColorCodedStrings", &FRuleInfo::ColorCodedStrings)
        .def_readwrite("ContainerRuleStartNdx", &FRuleInfo::ContainerRuleStartNdx)
        .def_readwrite("ContainerRuleNumSubRules", &FRuleInfo::ContainerRuleNumSubRules)
  ;
}