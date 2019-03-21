#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHomingRadiusThreshold()
{
    py::class_< FHomingRadiusThreshold >("FHomingRadiusThreshold")
        .def_readwrite("Radius", &FHomingRadiusThreshold::Radius)
        .def_readwrite("MaxAngleCos", &FHomingRadiusThreshold::MaxAngleCos)
        .def_readwrite("Behaviors", &FHomingRadiusThreshold::Behaviors)
  ;
}