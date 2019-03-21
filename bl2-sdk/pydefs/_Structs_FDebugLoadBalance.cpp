#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugLoadBalance()
{
    class_< FDebugLoadBalance >("FDebugLoadBalance", no_init)
        .def_readwrite("RuleEngine", &FDebugLoadBalance::RuleEngine)
        .def_readwrite("TimeSinceUpdate", &FDebugLoadBalance::TimeSinceUpdate)
        .def_readwrite("TimeToDoLastUpdate", &FDebugLoadBalance::TimeToDoLastUpdate)
        .def_readwrite("Priority", &FDebugLoadBalance::Priority)
  ;
}