#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRELBManagerStats()
{
    class_< FRELBManagerStats >("FRELBManagerStats", no_init)
        .def_readwrite("TotalTimeUpdated", &FRELBManagerStats::TotalTimeUpdated)
        .def_readwrite("MaxTimeUpdating", &FRELBManagerStats::MaxTimeUpdating)
        .def_readwrite("NumUpdated", &FRELBManagerStats::NumUpdated)
        .def_readwrite("AveragePriority", &FRELBManagerStats::AveragePriority)
        .def_readwrite("LowestPriority", &FRELBManagerStats::LowestPriority)
        .def_readwrite("HighestPriority", &FRELBManagerStats::HighestPriority)
  ;
}