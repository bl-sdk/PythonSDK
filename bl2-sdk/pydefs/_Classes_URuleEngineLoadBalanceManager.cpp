#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEngineLoadBalanceManager(py::module &m)
{
    py::class_< URuleEngineLoadBalanceManager,  UObject   >(m, "URuleEngineLoadBalanceManager")
		.def_static("StaticClass", &URuleEngineLoadBalanceManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NumTimeSpentThisFrame", &URuleEngineLoadBalanceManager::NumTimeSpentThisFrame)
        .def_readwrite("LastTimeFullUpdate", &URuleEngineLoadBalanceManager::LastTimeFullUpdate)
        .def_readwrite("WaitingEngines", &URuleEngineLoadBalanceManager::WaitingEngines)
        .def_readwrite("DebugEngines", &URuleEngineLoadBalanceManager::DebugEngines)
        .def_readwrite("ManagerStats", &URuleEngineLoadBalanceManager::ManagerStats)
        .def_readwrite("MSPosition", &URuleEngineLoadBalanceManager::MSPosition)
        .def("SetAsDebugging", &URuleEngineLoadBalanceManager::SetAsDebugging)
          ;
}