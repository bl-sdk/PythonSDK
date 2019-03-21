#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugLoadBalance(py::object m)
{
    py::class_< FDebugLoadBalance >(m, "FDebugLoadBalance")
        .def_readwrite("RuleEngine", &FDebugLoadBalance::RuleEngine)
        .def_readwrite("TimeSinceUpdate", &FDebugLoadBalance::TimeSinceUpdate)
        .def_readwrite("TimeToDoLastUpdate", &FDebugLoadBalance::TimeToDoLastUpdate)
        .def_readwrite("Priority", &FDebugLoadBalance::Priority)
  ;
}