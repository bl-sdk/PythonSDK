#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorKernelArrayStats(py::object m)
{
    py::class_< FBehaviorKernelArrayStats >(m, "FBehaviorKernelArrayStats")
        .def_readwrite("UsedSlots", &FBehaviorKernelArrayStats::UsedSlots)
        .def_readwrite("UnusedSlots", &FBehaviorKernelArrayStats::UnusedSlots)
        .def_readwrite("PeakUsage", &FBehaviorKernelArrayStats::PeakUsage)
        .def_readwrite("ContainerSlack", &FBehaviorKernelArrayStats::ContainerSlack)
  ;
}