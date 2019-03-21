#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleEngineLoadBalanceStruct()
{
    py::class_< FRuleEngineLoadBalanceStruct >("FRuleEngineLoadBalanceStruct")
        .def_readwrite("RuleEngine", &FRuleEngineLoadBalanceStruct::RuleEngine)
        .def_readwrite("TimeSinceLastUpdate", &FRuleEngineLoadBalanceStruct::TimeSinceLastUpdate)
        .def_readwrite("Priority", &FRuleEngineLoadBalanceStruct::Priority)
  ;
}