#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObstacleSegment()
{
    py::class_< FObstacleSegment >("FObstacleSegment")
        .def_readwrite("P1", &FObstacleSegment::P1)
        .def_readwrite("P2", &FObstacleSegment::P2)
        .def_readwrite("Normal", &FObstacleSegment::Normal)
  ;
}