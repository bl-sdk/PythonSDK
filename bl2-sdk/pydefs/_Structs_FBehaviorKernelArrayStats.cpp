#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorKernelArrayStats()
{
    class_< FBehaviorKernelArrayStats >("FBehaviorKernelArrayStats", no_init)
        .def_readwrite("UsedSlots", &FBehaviorKernelArrayStats::UsedSlots)
        .def_readwrite("UnusedSlots", &FBehaviorKernelArrayStats::UnusedSlots)
        .def_readwrite("PeakUsage", &FBehaviorKernelArrayStats::PeakUsage)
        .def_readwrite("ContainerSlack", &FBehaviorKernelArrayStats::ContainerSlack)
  ;
}