#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassDebugOptions()
{
    py::class_< FLightmassDebugOptions >("FLightmassDebugOptions")
        .def_readwrite("CoplanarTolerance", &FLightmassDebugOptions::CoplanarTolerance)
        .def_readwrite("ExecutionTimeDivisor", &FLightmassDebugOptions::ExecutionTimeDivisor)
  ;
}