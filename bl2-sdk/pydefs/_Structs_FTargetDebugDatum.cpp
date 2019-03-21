#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetDebugDatum()
{
    py::class_< FTargetDebugDatum >("FTargetDebugDatum")
        .def_readwrite("TargetName", &FTargetDebugDatum::TargetName)
        .def_readwrite("TotalPriority", &FTargetDebugDatum::TotalPriority)
        .def_readwrite("PriorityData", &FTargetDebugDatum::PriorityData)
  ;
}