#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorKernelInfo()
{
    py::class_< FBehaviorKernelInfo >("FBehaviorKernelInfo")
        .def_readwrite("StateForThreadRunningThisBehavior", &FBehaviorKernelInfo::StateForThreadRunningThisBehavior)
        .def_readwrite("WorldTime", &FBehaviorKernelInfo::WorldTime)
        .def_readwrite("ExecutionTime", &FBehaviorKernelInfo::ExecutionTime)
        .def_readwrite("WorldDeltaTime", &FBehaviorKernelInfo::WorldDeltaTime)
        .def_readwrite("ExecutionDelayError", &FBehaviorKernelInfo::ExecutionDelayError)
        .def_readwrite("NextExecutionDelayTime", &FBehaviorKernelInfo::NextExecutionDelayTime)
  ;
}