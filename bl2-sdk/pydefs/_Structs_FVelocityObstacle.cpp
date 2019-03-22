#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVelocityObstacle(py::module &m)
{
    py::class_< FVelocityObstacle >(m, "FVelocityObstacle")
  ;
}