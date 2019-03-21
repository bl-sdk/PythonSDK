#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwarmDebugOptions(py::object m)
{
    py::class_< FSwarmDebugOptions >(m, "FSwarmDebugOptions")
  ;
}