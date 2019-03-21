#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorKernelInfo()
{
    class_< FBehaviorKernelInfo >("FBehaviorKernelInfo", no_init)
        .def_readwrite("StateForThreadRunningThisBehavior", &FBehaviorKernelInfo::StateForThreadRunningThisBehavior)
        .def_readwrite("WorldTime", &FBehaviorKernelInfo::WorldTime)
        .def_readwrite("ExecutionTime", &FBehaviorKernelInfo::ExecutionTime)
        .def_readwrite("WorldDeltaTime", &FBehaviorKernelInfo::WorldDeltaTime)
        .def_readwrite("ExecutionDelayError", &FBehaviorKernelInfo::ExecutionDelayError)
        .def_readwrite("NextExecutionDelayTime", &FBehaviorKernelInfo::NextExecutionDelayTime)
  ;
}