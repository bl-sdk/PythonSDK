#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRuleInfo()
{
    class_< FRuleInfo >("FRuleInfo", no_init)
        .def_readwrite("RuleName", &FRuleInfo::RuleName)
        .def_readwrite("RuleNameString", &FRuleInfo::RuleNameString)
        .def_readwrite("RunningSequence", &FRuleInfo::RunningSequence)
        .def_readwrite("LatentAction", &FRuleInfo::LatentAction)
        .def_readwrite("ColorCodedStrings", &FRuleInfo::ColorCodedStrings)
        .def_readwrite("ContainerRuleStartNdx", &FRuleInfo::ContainerRuleStartNdx)
        .def_readwrite("ContainerRuleNumSubRules", &FRuleInfo::ContainerRuleNumSubRules)
  ;
}