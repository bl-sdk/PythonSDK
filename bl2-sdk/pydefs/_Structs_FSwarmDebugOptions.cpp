#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwarmDebugOptions()
{
    py::class_< FSwarmDebugOptions >("FSwarmDebugOptions")
  ;
}