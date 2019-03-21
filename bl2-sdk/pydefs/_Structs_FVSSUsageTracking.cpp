#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVSSUsageTracking()
{
    py::class_< FVSSUsageTracking >("FVSSUsageTracking")
        .def_readwrite("TheTerminal", &FVSSUsageTracking::TheTerminal)
        .def_readwrite("ThePlayerName", &FVSSUsageTracking::ThePlayerName)
  ;
}