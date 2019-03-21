#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRuleEngineLoadBalanceStruct()
{
    class_< FRuleEngineLoadBalanceStruct >("FRuleEngineLoadBalanceStruct", no_init)
        .def_readwrite("RuleEngine", &FRuleEngineLoadBalanceStruct::RuleEngine)
        .def_readwrite("TimeSinceLastUpdate", &FRuleEngineLoadBalanceStruct::TimeSinceLastUpdate)
        .def_readwrite("Priority", &FRuleEngineLoadBalanceStruct::Priority)
  ;
}