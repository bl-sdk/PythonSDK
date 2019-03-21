#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVelocityObstacle()
{
    py::class_< FVelocityObstacle >("FVelocityObstacle")
        .def_readonly("Segments", &FVelocityObstacle::Segments)
  ;
}