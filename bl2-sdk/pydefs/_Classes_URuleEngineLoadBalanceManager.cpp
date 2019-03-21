#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URuleEngineLoadBalanceManager()
{
    class_< URuleEngineLoadBalanceManager, bases< UObject >  , boost::noncopyable>("URuleEngineLoadBalanceManager", no_init)
        .def_readwrite("NumTimeSpentThisFrame", &URuleEngineLoadBalanceManager::NumTimeSpentThisFrame)
        .def_readwrite("LastTimeFullUpdate", &URuleEngineLoadBalanceManager::LastTimeFullUpdate)
        .def_readwrite("WaitingEngines", &URuleEngineLoadBalanceManager::WaitingEngines)
        .def_readwrite("DebugEngines", &URuleEngineLoadBalanceManager::DebugEngines)
        .def_readwrite("ManagerStats", &URuleEngineLoadBalanceManager::ManagerStats)
        .def_readwrite("MSPosition", &URuleEngineLoadBalanceManager::MSPosition)
        .def("StaticClass", &URuleEngineLoadBalanceManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetAsDebugging", &URuleEngineLoadBalanceManager::SetAsDebugging)
        .staticmethod("StaticClass")
  ;
}