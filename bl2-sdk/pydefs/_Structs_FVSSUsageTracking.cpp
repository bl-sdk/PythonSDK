#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVSSUsageTracking()
{
    class_< FVSSUsageTracking >("FVSSUsageTracking", no_init)
        .def_readwrite("TheTerminal", &FVSSUsageTracking::TheTerminal)
        .def_readwrite("ThePlayerName", &FVSSUsageTracking::ThePlayerName)
  ;
}