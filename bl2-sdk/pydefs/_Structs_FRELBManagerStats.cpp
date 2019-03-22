#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRELBManagerStats(py::module &m)
{
    py::class_< FRELBManagerStats >(m, "FRELBManagerStats")
        .def_readwrite("TotalTimeUpdated", &FRELBManagerStats::TotalTimeUpdated)
        .def_readwrite("MaxTimeUpdating", &FRELBManagerStats::MaxTimeUpdating)
        .def_readwrite("NumUpdated", &FRELBManagerStats::NumUpdated)
        .def_readwrite("AveragePriority", &FRELBManagerStats::AveragePriority)
        .def_readwrite("LowestPriority", &FRELBManagerStats::LowestPriority)
        .def_readwrite("HighestPriority", &FRELBManagerStats::HighestPriority)
  ;
}