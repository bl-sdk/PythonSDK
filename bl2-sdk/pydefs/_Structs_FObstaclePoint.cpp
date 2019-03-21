#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObstaclePoint(py::object m)
{
    py::class_< FObstaclePoint >(m, "FObstaclePoint")
        .def_readwrite("Value", &FObstaclePoint::Value)
        .def_readwrite("Offset", &FObstaclePoint::Offset)
  ;
}