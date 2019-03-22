#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassDebugOptions(py::module &m)
{
    py::class_< FLightmassDebugOptions >(m, "FLightmassDebugOptions")
        .def_readwrite("CoplanarTolerance", &FLightmassDebugOptions::CoplanarTolerance)
        .def_readwrite("ExecutionTimeDivisor", &FLightmassDebugOptions::ExecutionTimeDivisor)
  ;
}