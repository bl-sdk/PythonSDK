#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLockOnTargetStateStruct()
{
    py::class_< FLockOnTargetStateStruct >("FLockOnTargetStateStruct")
        .def_readwrite("CurrentTarget", &FLockOnTargetStateStruct::CurrentTarget)
        .def_readwrite("StartTime", &FLockOnTargetStateStruct::StartTime)
        .def_readwrite("CoolDownStartTime", &FLockOnTargetStateStruct::CoolDownStartTime)
  ;
}