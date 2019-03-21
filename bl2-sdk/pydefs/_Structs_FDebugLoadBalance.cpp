#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugLoadBalance()
{
    py::class_< FDebugLoadBalance >("FDebugLoadBalance")
        .def_readwrite("RuleEngine", &FDebugLoadBalance::RuleEngine)
        .def_readwrite("TimeSinceUpdate", &FDebugLoadBalance::TimeSinceUpdate)
        .def_readwrite("TimeToDoLastUpdate", &FDebugLoadBalance::TimeToDoLastUpdate)
        .def_readwrite("Priority", &FDebugLoadBalance::Priority)
  ;
}