#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVelocityObstacle(py::object m)
{
    py::class_< FVelocityObstacle >(m, "FVelocityObstacle")
        .def_readonly("Segments", &FVelocityObstacle::Segments)
  ;
}