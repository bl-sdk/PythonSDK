#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorKernelStats(py::module &m)
{
    py::class_< FBehaviorKernelStats >(m, "FBehaviorKernelStats")
        .def_readwrite("NumProcessesCreated", &FBehaviorKernelStats::NumProcessesCreated)
        .def_readwrite("NumThreadsCreated", &FBehaviorKernelStats::NumThreadsCreated)
        .def_readwrite("NumWaitingThreads", &FBehaviorKernelStats::NumWaitingThreads)
        .def_readwrite("NumEventsActivated", &FBehaviorKernelStats::NumEventsActivated)
        .def_readwrite("NumEventsIgnored", &FBehaviorKernelStats::NumEventsIgnored)
        .def_readwrite("NumBehaviorsRun", &FBehaviorKernelStats::NumBehaviorsRun)
        .def_readwrite("ProcessListStats", &FBehaviorKernelStats::ProcessListStats)
        .def_readwrite("ProviderListStats", &FBehaviorKernelStats::ProviderListStats)
        .def_readwrite("ObjectVariablesListStats", &FBehaviorKernelStats::ObjectVariablesListStats)
        .def_readwrite("DynamicBehaviorsListStats", &FBehaviorKernelStats::DynamicBehaviorsListStats)
        .def_readwrite("ProvidersIndexFreeListLength", &FBehaviorKernelStats::ProvidersIndexFreeListLength)
        .def_readwrite("ObjectVariablesFreeListLength", &FBehaviorKernelStats::ObjectVariablesFreeListLength)
        .def_readwrite("TotalMemoryUsed", &FBehaviorKernelStats::TotalMemoryUsed)
        .def_readwrite("MemoryUsedBySlack", &FBehaviorKernelStats::MemoryUsedBySlack)
  ;
}